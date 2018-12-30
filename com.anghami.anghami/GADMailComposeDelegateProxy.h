//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MFMailComposeViewControllerDelegate-Protocol.h"

@class MFMailComposeViewController, NSString;
@protocol MFMailComposeViewControllerDelegate;

@interface GADMailComposeDelegateProxy : NSObject <MFMailComposeViewControllerDelegate>
{
    GADMailComposeDelegateProxy *_strongSelf;
    id <MFMailComposeViewControllerDelegate> _mailComposeDelegate;
    MFMailComposeViewController *_mailComposeViewController;
}

+ (id)associatedDelegateProxyForController:(id)arg1;
@property(retain, nonatomic) MFMailComposeViewController *mailComposeViewController; // @synthesize mailComposeViewController=_mailComposeViewController;
@property(nonatomic) __weak id <MFMailComposeViewControllerDelegate> mailComposeDelegate; // @synthesize mailComposeDelegate=_mailComposeDelegate;
- (void).cxx_destruct;
- (void)stopProxying;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (id)initInternal;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

