//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface YTIMdeGameTitleUpdateRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasNewKgEntityId; // @dynamic hasNewKgEntityId;
@property(nonatomic) _Bool hasNewTitle; // @dynamic hasNewTitle;
@property(copy, nonatomic) NSString *newKgEntityId; // @dynamic newKgEntityId;
@property(copy, nonatomic) NSString *newTitle; // @dynamic newTitle;

@end

