//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImage;

@interface GWACheckbox : UIButton
{
    UIImage *_onImage;
    UIImage *_offImage;
    _Bool _on;
}

@property(nonatomic, getter=isOn) _Bool on; // @synthesize on=_on;
- (void).cxx_destruct;
- (void)toggle;
- (id)initWithColor:(id)arg1;

@end

