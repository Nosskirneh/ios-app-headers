//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANGSectionedContentViewController.h"

@protocol ANGSearchAutocompleteViewControllerDelegate;

@interface ANGSearchAutocompleteViewController : ANGSectionedContentViewController
{
    id <ANGSearchAutocompleteViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <ANGSearchAutocompleteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)analyticsReportingDataObject:(id)arg1;
- (void)handleClickedObject:(id)arg1 inSection:(id)arg2 atIndexPath:(id)arg3 correctedIndex:(long long)arg4;
- (id)navigationController;
- (void)scrollViewWillBeginDragging:(id)arg1;

@end

