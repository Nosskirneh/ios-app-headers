//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonController.h"

@class NSString, UITextView;

@interface RCScreenView : CommonController
{
    UITextView *_textView;
    NSString *_text;
}

@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)closeView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 screenTitle:(id)arg3 text:(id)arg4;

@end

