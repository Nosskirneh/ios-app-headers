//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "GLUEStyleable.h"

@class GLUELabel, NSString, UIImageView;

@interface SPTFreeTierPlaylistSponsoredLogoCell : UITableViewCell <GLUEStyleable>
{
    GLUELabel *_sponsorshipLabel;
    UIImageView *_logoImageView;
}

@property(readonly, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(readonly, nonatomic) GLUELabel *sponsorshipLabel; // @synthesize sponsorshipLabel=_sponsorshipLabel;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

