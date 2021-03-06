//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GPMCarPlayLoggingDelegate-Protocol.h"

@class GPMButton, NSDateFormatter, NSMutableAttributedString, NSString, UIFont, UITextView;

@interface GPMCarPlayDebugLogViewController : UIViewController <GPMCarPlayLoggingDelegate>
{
    NSMutableAttributedString *_logString;
    NSDateFormatter *_formatter;
    UIFont *_logFont;
    UITextView *_consoleTextView;
    GPMButton *_reloadButton;
    GPMButton *_dropIJCacheButton;
    GPMButton *_clearConsoleButton;
}

- (void).cxx_destruct;
- (void)didHitReloadButton:(id)arg1;
- (void)didHitDropIJCacheButton:(id)arg1;
- (void)didHitClearButton:(id)arg1;
- (void)log:(id)arg1 atLevel:(unsigned long long)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

