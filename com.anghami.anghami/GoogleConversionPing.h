//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GoogleConversionPing : NSObject
{
}

+ (void)pingWithConversionId:(id)arg1 label:(id)arg2 value:(id)arg3 isRepeatable:(_Bool)arg4 idfaOnly:(_Bool)arg5;
+ (id)sdkVersion;
+ (_Bool)registerReferrer:(id)arg1;
+ (void)pingRemarketingWithConversionId:(id)arg1 label:(id)arg2 screenName:(id)arg3 customParameters:(id)arg4;
+ (void)pingWithConversionId:(id)arg1 type:(long long)arg2 label:(id)arg3 value:(id)arg4 isRepeatable:(_Bool)arg5;
+ (void)pingWithConversionId:(id)arg1 label:(id)arg2 value:(id)arg3 isRepeatable:(_Bool)arg4;

@end

