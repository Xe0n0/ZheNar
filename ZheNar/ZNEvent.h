//
//  ZNEvent.h
//  ZheNar
//
//  Created by C.Svenja on 2013-05-23.
//  Copyright (c) 2013 Zhenar. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZNEventType.h"
#import "ZNPlace.h"
#import "ZNUser.h"

@interface ZNEvent : NSObject

@property (strong, nonatomic) NSString *name;
@property (strong, nonatomic) ZNEventType *type;
@property (strong, nonatomic) NSString *organization;
@property (strong, nonatomic) ZNUser *host;
@property (strong, nonatomic) NSString *description;

@property (strong, nonatomic) ZNPlace *place;
@property (strong, nonatomic) NSString *detailedPlace;
@property (strong, nonatomic) NSDate *startTime;
@property (strong, nonatomic) NSDate *endTime;

@property (nonatomic) NSInteger followerCount;

@end