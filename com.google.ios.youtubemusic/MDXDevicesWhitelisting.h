//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MDXDeviceInfoMatcherUtil, NSArray;

@interface MDXDevicesWhitelisting : NSObject
{
    NSArray *_features;
    MDXDeviceInfoMatcherUtil *_matcherUtil;
}

+ (void)addDeviceToArray:(id)arg1 connectionType:(int)arg2 manufacturer:(id)arg3 modelName:(id)arg4 deviceVersion:(id)arg5;
+ (id)defaultFeatures:(id)arg1;
- (void).cxx_destruct;
- (_Bool)checkThatDevice:(id)arg1 matchesAnyMatcher:(id)arg2;
- (id)getFeatureControl:(int)arg1;
- (_Bool)isFeatureEnabled:(int)arg1 device:(id)arg2;
- (id)init;

@end
