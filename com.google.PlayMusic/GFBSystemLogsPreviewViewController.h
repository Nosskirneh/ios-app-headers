//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GFBBasePreviewViewController.h"

@class GOOTextContentViewObject;

@interface GFBSystemLogsPreviewViewController : GFBBasePreviewViewController
{
    GOOTextContentViewObject *_systemLogCellObject;
}

- (void).cxx_destruct;
- (id)contentViewObjectsForApplicationSpecificData:(id)arg1;
- (void)didTapProductSpecificBinaryData:(id)arg1;
- (void)didTapOnSystemLog:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (unsigned long long)collectionView:(id)arg1 accessoryTypeAtIndexPath:(id)arg2;
- (id)createCollectionViewModel;
- (void)viewDidLoad;

@end

