//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariServices/SFSafariViewController.h>

#import "_TtP7Anghami28ANGScreenshotManagerDelegate_-Protocol.h"

@class NSString, NSURL;

@interface ANGSafariViewController : SFSafariViewController <_TtP7Anghami28ANGScreenshotManagerDelegate_>
{
    NSURL *_urlLink;
}

@property(readonly, nonatomic) NSURL *urlLink; // @synthesize urlLink=_urlLink;
- (void).cxx_destruct;
- (id)objectToShareWhenScreenshotDetected;
- (id)initWithURL:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
