//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IMPing : NSObject
{
    _Bool _pingInWV;
    _Bool _followRedirects;
    unsigned int _retryCount;
    NSString *_url;
    NSString *_pingID;
    unsigned long long _sendStartTime;
}

@property(nonatomic) unsigned long long sendStartTime; // @synthesize sendStartTime=_sendStartTime;
@property(nonatomic) unsigned int retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) NSString *pingID; // @synthesize pingID=_pingID;
@property(nonatomic) _Bool followRedirects; // @synthesize followRedirects=_followRedirects;
@property(readonly, nonatomic) _Bool pingInWV; // @synthesize pingInWV=_pingInWV;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)initWithUrl:(id)arg1 isPingInWV:(_Bool)arg2 followRedirects:(_Bool)arg3;
- (id)init;

@end
