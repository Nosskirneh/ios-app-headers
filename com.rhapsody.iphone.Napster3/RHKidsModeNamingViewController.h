//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHViewController.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSLayoutConstraint, NSString, UILabel, UIScrollView, UITextField, UIView;

@interface RHKidsModeNamingViewController : RHViewController <UITextFieldDelegate>
{
    UILabel *_titleLabel;
    UILabel *_exampleLabel;
    UITextField *_nameTextField;
    UIView *_mainView;
    UIView *_textFieldView;
    UIScrollView *_scrollView;
    NSLayoutConstraint *_scrollViewBottomConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *scrollViewBottomConstraint; // @synthesize scrollViewBottomConstraint=_scrollViewBottomConstraint;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak UIView *textFieldView; // @synthesize textFieldView=_textFieldView;
@property(nonatomic) __weak UIView *mainView; // @synthesize mainView=_mainView;
@property(nonatomic) __weak UITextField *nameTextField; // @synthesize nameTextField=_nameTextField;
@property(nonatomic) __weak UILabel *exampleLabel; // @synthesize exampleLabel=_exampleLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

