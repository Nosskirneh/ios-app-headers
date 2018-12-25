//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MLViewportSizeProvider-Protocol.h"
#import "YTSystemNotificationsObserver-Protocol.h"

@class GIMMe, MLViewportSize, NSHashTable, NSString;

@interface MLDefaultViewportSizeProvider : NSObject <YTSystemNotificationsObserver, MLViewportSizeProvider>
{
    NSHashTable *_observers;
    _Bool _isInBackground;
    MLViewportSize *_backgroundViewportSize;
    MLViewportSize *_viewportSize;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) MLViewportSize *viewportSize; // @synthesize viewportSize=_viewportSize;
- (void).cxx_destruct;
- (void)appWillEnterForeground:(id)arg1;
- (void)appDidEnterBackground:(id)arg1;
- (void)removeViewportSizeObserver:(id)arg1;
- (void)addViewportSizeObserver:(id)arg1;
- (void)setViewportSize:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

