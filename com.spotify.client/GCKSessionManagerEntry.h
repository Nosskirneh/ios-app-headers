//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class GCKSession;

@interface GCKSessionManagerEntry : NSObject <NSCopying>
{
    GCKSession *_session;
    long long _suspendReason;
}

@property(nonatomic) long long suspendReason; // @synthesize suspendReason=_suspendReason;
@property(retain, nonatomic) GCKSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSession:(id)arg1;

@end

