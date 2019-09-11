//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSLocale, NSString, SPTPhoneNumberSignupUtils;
@protocol SPTPhoneNumberSignupCallingCodeViewModelDelegate;

@interface SPTPhoneNumberSignupCallingCodeViewModel : NSObject
{
    id <SPTPhoneNumberSignupCallingCodeViewModelDelegate> _delegate;
    NSString *_searchQueryText;
    NSString *_selectedCountryCode;
    NSArray *_initialRowViewModels;
    NSArray *_filteredRowViewModels;
    NSLocale *_locale;
    SPTPhoneNumberSignupUtils *_phoneNumberSignupUtils;
}

@property(readonly, nonatomic) SPTPhoneNumberSignupUtils *phoneNumberSignupUtils; // @synthesize phoneNumberSignupUtils=_phoneNumberSignupUtils;
@property(readonly, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(copy, nonatomic) NSArray *filteredRowViewModels; // @synthesize filteredRowViewModels=_filteredRowViewModels;
@property(copy, nonatomic) NSArray *initialRowViewModels; // @synthesize initialRowViewModels=_initialRowViewModels;
@property(readonly, copy, nonatomic) NSString *selectedCountryCode; // @synthesize selectedCountryCode=_selectedCountryCode;
@property(copy, nonatomic) NSString *searchQueryText; // @synthesize searchQueryText=_searchQueryText;
@property(nonatomic) __weak id <SPTPhoneNumberSignupCallingCodeViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long numberOfRows;
- (id)rowViewModelAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long indexOfCurrentLocale;
- (id)filterRowViewModelsWithText:(id)arg1;
- (id)setupAndSortRowViewModelsWithModel:(id)arg1 phoneNumberSignupUtils:(id)arg2 locale:(id)arg3;
- (id)initWithModel:(id)arg1 locale:(id)arg2 phoneNumberSignupUtils:(id)arg3;
@property(readonly, nonatomic) NSString *searchBarPlaceholder;
@property(readonly, nonatomic) NSString *title;

@end

