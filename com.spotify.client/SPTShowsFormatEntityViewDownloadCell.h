//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "GLUEStyleable-Protocol.h"

@class GLUELabel, NSString, UISwitch;

@interface SPTShowsFormatEntityViewDownloadCell : UICollectionViewCell <GLUEStyleable>
{
    GLUELabel *_label;
    UISwitch *_downloadSwitch;
}

@property(readonly, nonatomic) UISwitch *downloadSwitch; // @synthesize downloadSwitch=_downloadSwitch;
@property(readonly, nonatomic) GLUELabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

