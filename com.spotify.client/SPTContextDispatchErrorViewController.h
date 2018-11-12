//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTPageController-Protocol.h"

@class NSString, NSURL;
@protocol SPTPageContainer;

@interface SPTContextDispatchErrorViewController : UIViewController <SPTPageController>
{
    NSURL *_pageURI;
    unsigned long long _error;
}

@property(readonly, nonatomic) unsigned long long error; // @synthesize error=_error;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI; // @synthesize pageURI=_pageURI;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (id)messageForError:(unsigned long long)arg1;
- (void)viewDidLoad;
- (id)initWithError:(unsigned long long)arg1 URI:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

