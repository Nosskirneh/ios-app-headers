//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTYourLibraryTabControlDelegate-Protocol.h"

@class NSArray, NSString, SPTYourLibraryGLUETheme, SPTYourLibraryLogger, SPTYourLibraryTabControl;
@protocol SPTYourLibrarySectionHeaderViewControllerDelegate;

@interface SPTYourLibrarySectionHeaderViewController : UIViewController <SPTYourLibraryTabControlDelegate>
{
    id <SPTYourLibrarySectionHeaderViewControllerDelegate> _delegate;
    unsigned long long _section;
    NSArray *_segments;
    SPTYourLibraryGLUETheme *_theme;
    SPTYourLibraryTabControl *_tabControl;
    SPTYourLibraryLogger *_logger;
}

@property(retain, nonatomic) SPTYourLibraryLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTYourLibraryTabControl *tabControl; // @synthesize tabControl=_tabControl;
@property(retain, nonatomic) SPTYourLibraryGLUETheme *theme; // @synthesize theme=_theme;
@property(copy, nonatomic) NSArray *segments; // @synthesize segments=_segments;
@property(readonly, nonatomic) unsigned long long section; // @synthesize section=_section;
@property(nonatomic) __weak id <SPTYourLibrarySectionHeaderViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)yourLibraryTabControlDidChangeSelection:(id)arg1;
- (void)initializeInterface;
- (void)setSelectedSegmentFrom:(double)arg1 toSegment:(double)arg2;
- (void)resetSelectedStateToIndex:(unsigned long long)arg1;
- (void)viewDidLoad;
- (id)initWithSection:(unsigned long long)arg1 theme:(id)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

