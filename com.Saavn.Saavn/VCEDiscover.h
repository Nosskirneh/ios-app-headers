//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface VCEDiscover : NSObject
{
    Class _uiViewClass;
    _Bool _useNamesArray;
    NSArray *_adViewNamesArrayFromGG;
    NSArray *_adViewNamesArrayFromSDK;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool useNamesArray; // @synthesize useNamesArray=_useNamesArray;
@property(retain, nonatomic) NSArray *adViewNamesArrayFromSDK; // @synthesize adViewNamesArrayFromSDK=_adViewNamesArrayFromSDK;
@property(retain, nonatomic) NSArray *adViewNamesArrayFromGG; // @synthesize adViewNamesArrayFromGG=_adViewNamesArrayFromGG;
- (void).cxx_destruct;
- (id)viewControllerForViewFromMainQueue:(id)arg1;
- (id)viewControllerForView:(id)arg1;
- (id)init;

@end

