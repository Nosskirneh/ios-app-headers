//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SKStoreProductViewControllerDelegate-Protocol.h"

@class NSString, SKStoreProductViewController;

@interface GADStoreKitProductInlineRenderer : NSObject <SKStoreProductViewControllerDelegate>
{
    SKStoreProductViewController *_controller;
    _Bool _renderedInline;
    CDUnknownBlockType _dismissNotificationBlock;
}

- (void).cxx_destruct;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)dismiss;
- (void)resizeToFrame:(struct CGRect)arg1;
- (void)renderInView:(id)arg1 dismissalCompletionBlock:(CDUnknownBlockType)arg2;
- (id)initWithStoreKitProduct:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
