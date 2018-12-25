//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTFeedSectionController.h"

#import "YTCellFactory-Protocol.h"
#import "YTRendererController-Protocol.h"

@class NSString, YTCollectionViewContainerCellController;
@protocol YTInnerTubeUIService, YTResponder;

@interface YTCollectionViewContainerSectionController : YTFeedSectionController <YTCellFactory, YTRendererController>
{
    id <YTInnerTubeUIService> _service;
    YTCollectionViewContainerCellController *_containerCellController;
    id <YTResponder> _parentResponder;
}

@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (id)cellController;
- (void)setCellController:(id)arg1;
- (id)service;
- (id)collectionViewController;
- (id)cellClassesToRegister;
- (Class)classForEntry:(id)arg1;
- (id)cellControllerForEntry:(id)arg1 parentResponder:(id)arg2;
- (void)loadWithModel:(id)arg1;
- (id)initWithService:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

