//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;
@protocol SSOIdentity;

@interface SSOCookieFetchRequest : NSObject
{
    NSString *_service;
    id <SSOIdentity> _identity;
    NSURL *_continueURL;
    CDUnknownBlockType _callback;
}

+ (id)requestForIdentity:(id)arg1 service:(id)arg2 continueURL:(id)arg3 callback:(CDUnknownBlockType)arg4;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) NSURL *continueURL; // @synthesize continueURL=_continueURL;
@property(retain, nonatomic) id <SSOIdentity> identity; // @synthesize identity=_identity;
@property(copy, nonatomic) NSString *service; // @synthesize service=_service;
- (void).cxx_destruct;

@end

