//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVCaptureMetadataOutputObjectsDelegate-Protocol.h"

@class AVCaptureDevice, AVCaptureDeviceInput, AVCaptureMetadataOutput, AVCaptureSession, AVCaptureStillImageOutput, AVCaptureVideoPreviewLayer, NSArray, NSString;

@interface QRCodeReader : NSObject <AVCaptureMetadataOutputObjectsDelegate>
{
    NSArray *_metadataObjectTypes;
    AVCaptureVideoPreviewLayer *_previewLayer;
    AVCaptureDeviceInput *_defaultDeviceInput;
    AVCaptureDeviceInput *_frontDeviceInput;
    AVCaptureMetadataOutput *_metadataOutput;
    AVCaptureDevice *_defaultDevice;
    AVCaptureDevice *_frontDevice;
    AVCaptureSession *_session;
    AVCaptureStillImageOutput *_stillImageOutput;
    CDUnknownBlockType _completionBlock;
}

+ (_Bool)supportsMetadataObjectTypes:(id)arg1;
+ (_Bool)isAvailable;
+ (long long)videoOrientationFromInterfaceOrientation:(long long)arg1;
+ (id)readerWithMetadataObjectTypes:(id)arg1;
+ (id)readerForStillPicture;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) AVCaptureStillImageOutput *stillImageOutput; // @synthesize stillImageOutput=_stillImageOutput;
@property(retain, nonatomic) AVCaptureSession *session; // @synthesize session=_session;
@property(retain, nonatomic) AVCaptureDevice *frontDevice; // @synthesize frontDevice=_frontDevice;
@property(retain, nonatomic) AVCaptureDevice *defaultDevice; // @synthesize defaultDevice=_defaultDevice;
@property(retain, nonatomic) AVCaptureMetadataOutput *metadataOutput; // @synthesize metadataOutput=_metadataOutput;
@property(retain, nonatomic) AVCaptureDeviceInput *frontDeviceInput; // @synthesize frontDeviceInput=_frontDeviceInput;
@property(retain, nonatomic) AVCaptureDeviceInput *defaultDeviceInput; // @synthesize defaultDeviceInput=_defaultDeviceInput;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=_previewLayer;
@property(readonly, nonatomic) NSArray *metadataObjectTypes; // @synthesize metadataObjectTypes=_metadataObjectTypes;
- (void).cxx_destruct;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)setCompletionWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)running;
- (void)stopScanning;
- (void)startScanning;
- (void)takeStillPictureWithCallback:(CDUnknownBlockType)arg1;
- (void)toggleTorch;
- (_Bool)isTorchAvailable;
- (_Bool)hasFrontDevice;
- (void)switchDeviceInput;
- (void)configureDefaultComponents;
- (void)setupAVComponents;
- (id)initForStillPicture;
- (id)initWithMetadataObjectTypes:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

