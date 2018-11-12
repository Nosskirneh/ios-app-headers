//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DZRDynamicPageAction-Protocol.h"

@class NSString;
@protocol DZRDynamicPageAction;

@interface DZRDynamicPageProxyAction : NSObject <DZRDynamicPageAction>
{
    id <DZRDynamicPageAction> _wrappedAction;
    NSString *_kind;
}

@property(copy, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property(retain, nonatomic) id <DZRDynamicPageAction> wrappedAction; // @synthesize wrappedAction=_wrappedAction;
- (void).cxx_destruct;
- (void)performAction;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)options;
- (id)name;
- (id)initWithKind:(id)arg1 action:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
