//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface RPJSONValidator : NSObject
{
}

+ (void)log:(id)arg1;
+ (void)setShouldSuppressLogging:(_Bool)arg1;
+ (id)prettyStringGivenRPJSONValidatorError:(id)arg1;
+ (_Bool)validateValuesFrom:(id)arg1 withRequirements:(id)arg2 error:(id *)arg3 userInfo:(id)arg4;
+ (_Bool)validateValuesFrom:(id)arg1 withRequirements:(id)arg2 error:(id *)arg3;

@end

