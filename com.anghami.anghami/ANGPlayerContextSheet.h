//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANGItemContextSheet.h"

#import "ANGOptionsSelectorDelegate-Protocol.h"

@class NSString;

@interface ANGPlayerContextSheet : ANGItemContextSheet <ANGOptionsSelectorDelegate>
{
    CDUnknownBlockType _cameraActionCompletion;
    NSString *_source;
}

+ (id)getOptionsForSong:(id)arg1;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) CDUnknownBlockType cameraActionCompletion; // @synthesize cameraActionCompletion=_cameraActionCompletion;
- (void).cxx_destruct;
- (void)createVideo;
- (id)optionsForSection:(unsigned long long)arg1;
- (unsigned long long)optionsSelectorNumberOfRowsForSection:(unsigned long long)arg1;
- (id)optionsSelectorTitleForSection:(unsigned long long)arg1;
- (unsigned long long)optionsSelectorNumberOfSections;
- (void)optionSelected:(id)arg1 valueChanged:(unsigned long long)arg2;
- (void)optionSelectorDidCancel;
- (void)displayShareActionSheeWithItem:(id)arg1 fromView:(id)arg2 andSource:(id)arg3 cameraActionCompletion:(CDUnknownBlockType)arg4;
- (id)navigationControllerForPushAction;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)shouldDisableDownloadOnVideo;
- (id)supportedActionsForItem:(id)arg1;
- (void)viewDidLoad;
- (id)initWithSong:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
