//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ABKServerRequest : NSObject
{
    NSString *_userId;
    NSString *_sdkVersion;
    NSString *_appVersion;
}

@property(retain) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(retain) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(copy) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (_Bool)isEmpty;
- (id)body;
- (id)endpointURL;
- (id)initWithUserId:(id)arg1;

@end

