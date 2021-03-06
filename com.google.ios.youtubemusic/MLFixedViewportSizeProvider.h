//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MLViewportSizeProvider-Protocol.h"

@class MLViewportSize, NSString;

@interface MLFixedViewportSizeProvider : NSObject <MLViewportSizeProvider>
{
    MLViewportSize *_viewportSize;
}

@property(readonly, nonatomic) MLViewportSize *viewportSize; // @synthesize viewportSize=_viewportSize;
- (void).cxx_destruct;
- (void)removeViewportSizeObserver:(id)arg1;
- (void)addViewportSizeObserver:(id)arg1;
- (id)init;
- (id)initWithViewportSize:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

