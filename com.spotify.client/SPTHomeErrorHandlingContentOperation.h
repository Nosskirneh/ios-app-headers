//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBContentOperation-Protocol.h"
#import "SPTHomeCacheRenderDelegate-Protocol.h"

@class NSString;
@protocol HUBContentOperationDelegate, SPTSnackbarConditionalPresenter;

@interface SPTHomeErrorHandlingContentOperation : NSObject <HUBContentOperation, SPTHomeCacheRenderDelegate>
{
    _Bool _cacheContentHasRendered;
    id <HUBContentOperationDelegate> _delegate;
    CDUnknownBlockType _errorPredicate;
    id <SPTSnackbarConditionalPresenter> _snackBarPresenter;
}

@property(readonly, nonatomic) id <SPTSnackbarConditionalPresenter> snackBarPresenter; // @synthesize snackBarPresenter=_snackBarPresenter;
@property(nonatomic) _Bool cacheContentHasRendered; // @synthesize cacheContentHasRendered=_cacheContentHasRendered;
@property(readonly, copy, nonatomic) CDUnknownBlockType errorPredicate; // @synthesize errorPredicate=_errorPredicate;
@property(nonatomic) __weak id <HUBContentOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)configureOverlayForServerError:(id)arg1;
- (void)configureOverlayForOfflineError:(id)arg1;
- (void)addOverlayForError:(id)arg1 toViewModelBuilder:(id)arg2;
- (void)presentSnackBarForError:(id)arg1 toViewModelBuilder:(id)arg2;
- (void)performForViewModelBuilder:(id)arg1 previousError:(id)arg2;
- (void)viewController:(id)arg1 failedToLoadCacheWithError:(id)arg2;
- (void)viewControllerDidRenderCache:(id)arg1;
- (id)initWithErrorPredicate:(CDUnknownBlockType)arg1 snackBarPresenter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

