//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSHTTPURLResponse, NSString, OAMutableURLRequest;

@interface OAServiceTicket : NSObject
{
    OAMutableURLRequest *request;
    NSHTTPURLResponse *response;
    NSData *data;
    _Bool didSucceed;
}

@property(readonly) _Bool didSucceed; // @synthesize didSucceed;
@property(readonly) NSData *data; // @synthesize data;
@property(readonly) NSHTTPURLResponse *response; // @synthesize response;
@property(readonly) OAMutableURLRequest *request; // @synthesize request;
@property(readonly) NSString *body;
- (id)initWithRequest:(id)arg1 response:(id)arg2 data:(id)arg3 didSucceed:(_Bool)arg4;
- (id)initWithRequest:(id)arg1 response:(id)arg2 didSucceed:(_Bool)arg3;

@end

