//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface BFAppLinkTarget : NSObject
{
    NSURL *_URL;
    NSString *_appStoreId;
    NSString *_appName;
}

+ (id)appLinkTargetWithURL:(id)arg1 appStoreId:(id)arg2 appName:(id)arg3;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *appStoreId; // @synthesize appStoreId=_appStoreId;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;

@end

