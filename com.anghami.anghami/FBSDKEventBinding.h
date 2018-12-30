//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface FBSDKEventBinding : NSObject
{
    NSString *_eventName;
    NSString *_eventType;
    NSString *_appVersion;
    NSArray *_path;
    NSString *_pathType;
    NSArray *_parameters;
}

+ (id)findParameterOfPath:(id)arg1 pathType:(id)arg2 sourceView:(id)arg3;
+ (id)findViewByPath:(id)arg1 parent:(id)arg2 level:(int)arg3;
+ (_Bool)isPath:(id)arg1 matchViewPath:(id)arg2;
+ (_Bool)isViewMatchPath:(id)arg1 path:(id)arg2;
+ (_Bool)match:(id)arg1 pathComponent:(id)arg2;
+ (_Bool)matchAnyView:(id)arg1 pathComponent:(id)arg2;
@property(readonly, nonatomic) NSArray *parameters; // @synthesize parameters=_parameters;
@property(readonly, copy, nonatomic) NSString *pathType; // @synthesize pathType=_pathType;
@property(readonly, nonatomic) NSArray *path; // @synthesize path=_path;
@property(readonly, copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(readonly, copy, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
@property(readonly, copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
- (void).cxx_destruct;
- (void)trackEvent:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end

