//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class UlrError;

@interface KeychainRestrictionDeleteEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) UlrError *error; // @dynamic error;
@property(nonatomic) _Bool hasError; // @dynamic hasError;
@property(nonatomic) _Bool hasKeychainRestrictionDeleteResult; // @dynamic hasKeychainRestrictionDeleteResult;
@property(nonatomic) int keychainRestrictionDeleteResult; // @dynamic keychainRestrictionDeleteResult;

@end

