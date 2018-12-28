//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITextViewDelegate-Protocol.h"

@class MDCAppBar, NSString, UITextView;

@interface GFBBinaryDataViewController : UIViewController <UITextViewDelegate>
{
    UITextView *_textView;
    MDCAppBar *_appBar;
    NSString *_binaryData;
    long long _statusBarStyle;
}

@property(nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(copy, nonatomic) NSString *binaryData; // @synthesize binaryData=_binaryData;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)prefersStatusBarHidden;
- (id)initWithAppBar:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

