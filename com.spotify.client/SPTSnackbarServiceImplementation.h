//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTSnackbarService-Protocol.h"

@class NSString, SPTAllocationContext, SPTSnackbarAnimationView, SPTSnackbarPresenterImplementation;
@protocol SPTContainerUIService, SPTFreeTierService, SPTGLUEService;

@interface SPTSnackbarServiceImplementation : NSObject <SPTSnackbarService>
{
    id <SPTGLUEService> _glueService;
    id <SPTContainerUIService> _containerUIService;
    SPTSnackbarPresenterImplementation *_presenter;
    SPTSnackbarAnimationView *_snackbarAnimationView;
    id <SPTFreeTierService> _freeTierService;
}

+ (id)serviceIdentifier;
@property(nonatomic) __weak id <SPTFreeTierService> freeTierService; // @synthesize freeTierService=_freeTierService;
@property(retain, nonatomic) SPTSnackbarAnimationView *snackbarAnimationView; // @synthesize snackbarAnimationView=_snackbarAnimationView;
@property(retain, nonatomic) SPTSnackbarPresenterImplementation *presenter; // @synthesize presenter=_presenter;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
- (void).cxx_destruct;
- (id)provideSnackbarPresenter;
- (id)provideSnackbarPresenterForService:(id)arg1;
- (void)loadTheme;
- (void)disableSnackbarService;
- (void)enableSnackbarService;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

