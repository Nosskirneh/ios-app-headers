//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTICommand;

@interface YTIAccountUnlinkCommand : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasOnFailureCommand; // @dynamic hasOnFailureCommand;
@property(nonatomic) _Bool hasOnSuccessCommand; // @dynamic hasOnSuccessCommand;
@property(nonatomic) _Bool hasRefreshButtonCommand; // @dynamic hasRefreshButtonCommand;
@property(nonatomic) _Bool hasThirdPartyId; // @dynamic hasThirdPartyId;
@property(retain, nonatomic) YTICommand *onFailureCommand; // @dynamic onFailureCommand;
@property(retain, nonatomic) YTICommand *onSuccessCommand; // @dynamic onSuccessCommand;
@property(retain, nonatomic) YTICommand *refreshButtonCommand; // @dynamic refreshButtonCommand;
@property(copy, nonatomic) NSString *thirdPartyId; // @dynamic thirdPartyId;

@end
