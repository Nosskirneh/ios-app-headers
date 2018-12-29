//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BFAppLink, NSDictionary;

@interface BFAppLinkNavigation : NSObject
{
    NSDictionary *_extras;
    NSDictionary *_appLinkData;
    BFAppLink *_appLink;
}

+ (void)setDefaultResolver:(id)arg1;
+ (id)defaultResolver;
+ (long long)navigateToAppLink:(id)arg1 error:(id *)arg2;
+ (id)navigateToURLInBackground:(id)arg1 resolver:(id)arg2;
+ (id)navigateToURLInBackground:(id)arg1;
+ (id)resolveAppLinkInBackground:(id)arg1;
+ (id)resolveAppLinkInBackground:(id)arg1 resolver:(id)arg2;
+ (id)navigationWithAppLink:(id)arg1 extras:(id)arg2 appLinkData:(id)arg3;
@property(retain, nonatomic) BFAppLink *appLink; // @synthesize appLink=_appLink;
@property(copy, nonatomic) NSDictionary *appLinkData; // @synthesize appLinkData=_appLinkData;
@property(copy, nonatomic) NSDictionary *extras; // @synthesize extras=_extras;
- (void).cxx_destruct;
- (void)postAppLinkNavigateEventNotificationWithTargetURL:(id)arg1 error:(id)arg2 type:(long long)arg3;
- (long long)navigate:(id *)arg1;
- (id)appLinkURLWithTargetURL:(id)arg1 error:(id *)arg2;
- (id)stringByEscapingQueryString:(id)arg1;

@end

