//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTInnerTubeCellController.h"

#import "YTElementControllerProtocol-Protocol.h"

@class NSString;

@interface YTElementCellController : YTInnerTubeCellController <YTElementControllerProtocol>
{
}

- (id)itemsForBeginningDragSession:(id)arg1;
- (void)didBecomeHidden;
- (void)willBecomeVisible;
- (id)elementEntry;
- (id)initWithEntry:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

