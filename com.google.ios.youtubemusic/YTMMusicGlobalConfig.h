//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class YTGlobalConfig, YTUserDefaults;

@interface YTMMusicGlobalConfig : NSObject
{
    YTGlobalConfig *_globalConfig;
    YTUserDefaults *_userDefaults;
}

- (void).cxx_destruct;
- (id)musicGlobalConfigProto;
@property(readonly, nonatomic) _Bool isTagManagerDisabled;
- (id)initWithGlobalConfig:(id)arg1 userDefaults:(id)arg2;

@end

