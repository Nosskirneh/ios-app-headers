//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTShareHandler-Protocol.h"

@class NSString, SPTShareLogger, UIActivityViewController;

@interface SPTShareMoreShareHandler : NSObject <SPTShareHandler>
{
    SPTShareLogger *_shareLogger;
    UIActivityViewController *_activityViewController;
}

@property(retain, nonatomic) UIActivityViewController *activityViewController; // @synthesize activityViewController=_activityViewController;
@property(retain, nonatomic) SPTShareLogger *shareLogger; // @synthesize shareLogger=_shareLogger;
- (void).cxx_destruct;
- (void)shareWithData:(id)arg1 shareDestination:(id)arg2 sharePresenter:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithShareLogger:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

