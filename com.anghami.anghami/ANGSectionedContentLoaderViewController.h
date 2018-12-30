//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANGSectionedContentViewController.h"

@class ContentSectionLoader;

@interface ANGSectionedContentLoaderViewController : ANGSectionedContentViewController
{
    ContentSectionLoader *_contentSectionLoader;
}

@property(retain, nonatomic) ContentSectionLoader *contentSectionLoader; // @synthesize contentSectionLoader=_contentSectionLoader;
- (void).cxx_destruct;
- (void)updateTitle;
- (void)loadingFinished:(id)arg1;
- (void)loadingFailed:(id)arg1 withError:(id)arg2;
- (void)viewDidLayoutSubviews;
- (id)loader;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithContentSectionLoader:(id)arg1;

@end
