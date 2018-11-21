//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTHomeMixEffectHandler-Protocol.h"

@class NSString;
@protocol SPTLogCenter;

@interface SPTHomeMixLoggingEffectHandler : NSObject <SPTHomeMixEffectHandler>
{
    id <SPTLogCenter> _logCenter;
}

@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)acceptEffect:(id)arg1 model:(id)arg2;
- (void)acceptNext:(id)arg1;
- (_Bool)canAcceptEffect:(id)arg1;
- (id)initWithLogCenter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

