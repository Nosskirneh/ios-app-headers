//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ABKInAppMessage.h"

@class NSURL;

@interface ABKInAppMessageHTML : ABKInAppMessage
{
    NSURL *_assetsZipRemoteUrl;
    NSURL *_assetsLocalDirectoryPath;
}

@property(retain) NSURL *assetsLocalDirectoryPath; // @synthesize assetsLocalDirectoryPath=_assetsLocalDirectoryPath;
@property(retain) NSURL *assetsZipRemoteUrl; // @synthesize assetsZipRemoteUrl=_assetsZipRemoteUrl;
- (void).cxx_destruct;
- (void)logInAppMessageHTMLClickWithButtonID:(id)arg1;
- (id)imageURI;
- (id)proxyForJson;
- (id)description;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)init;

@end
