//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTScannablesScanViewModelDelegate-Protocol.h"

@class NSString, SPTScannablesDependencies, SPTScannablesScanViewController, UINavigationController;
@protocol SPTPageController, SPTScannablesImagePickerController, SPTScannablesRegistry;

@interface SPTScannablesScanViewModelDelegateImplementation : NSObject <SPTScannablesScanViewModelDelegate>
{
    id <SPTScannablesRegistry> _registry;
    SPTScannablesScanViewController<SPTPageController> *_viewController;
    SPTScannablesDependencies *_dependencies;
    UINavigationController<SPTScannablesImagePickerController> *_imagePickerController;
}

@property(readonly, nonatomic) __weak UINavigationController<SPTScannablesImagePickerController> *imagePickerController; // @synthesize imagePickerController=_imagePickerController;
@property(readonly, nonatomic) __weak SPTScannablesDependencies *dependencies; // @synthesize dependencies=_dependencies;
@property(readonly, nonatomic) __weak SPTScannablesScanViewController<SPTPageController> *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) __weak id <SPTScannablesRegistry> registry; // @synthesize registry=_registry;
- (void).cxx_destruct;
- (void)scannablesScanViewModel:(id)arg1 didFailScanWithError:(id)arg2;
- (void)scannablesScanViewModel:(id)arg1 didScanScannable:(id)arg2;
- (id)initWithRegistry:(id)arg1 viewController:(id)arg2 dependencies:(id)arg3 imagePickerController:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

