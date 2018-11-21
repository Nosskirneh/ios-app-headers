//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUIModeTransitionToken-Protocol.h"

@class NSDate, NSString, SPTUIModeTransitionCoordinatorImplementation;

@interface SPTUIModeTransitionCoordinatorRegistration : NSObject <SPTUIModeTransitionToken>
{
    SPTUIModeTransitionCoordinatorImplementation *_parent;
    NSDate *_expirationDate;
    CDUnknownBlockType _handler;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic) __weak SPTUIModeTransitionCoordinatorImplementation *parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithParent:(id)arg1 expirationDate:(id)arg2 handler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

