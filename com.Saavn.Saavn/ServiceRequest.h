//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, ServiceRequestHeader;

@interface ServiceRequest : NSObject
{
    NSString *_aURL;
    NSString *_body;
    unsigned long long _type;
    ServiceRequestHeader *_header;
}

- (void).cxx_destruct;
- (id)getHeader;
- (id)getRequestType;
- (id)getBody;
- (id)getURL;
- (id)initWithURL:(id)arg1 body:(id)arg2 type:(unsigned long long)arg3 header:(id)arg4;

@end

