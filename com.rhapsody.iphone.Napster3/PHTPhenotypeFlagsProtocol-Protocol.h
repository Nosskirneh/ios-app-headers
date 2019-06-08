//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSNumber, NSString, PHTPhenotypeExperimentTokens;

@protocol PHTPhenotypeFlagsProtocol <NSObject>
- (NSData *)dataForFlagName:(NSString *)arg1 defaultValue:(NSData *)arg2;
- (NSNumber *)numberForFlagName:(NSString *)arg1 defaultValue:(NSNumber *)arg2;
- (NSString *)stringForFlagName:(NSString *)arg1 defaultValue:(NSString *)arg2;
- (id)valueForFlagName:(NSString *)arg1 withDefault:(id)arg2;
- (PHTPhenotypeExperimentTokens *)tokens;
- (void)update;
- (void)startLoading;
@end

