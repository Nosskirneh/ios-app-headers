//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GenderSelectConfig : NSObject
{
    NSString *_title;
    NSString *_genderPlaceholder;
    NSString *_customGenderPlaceholder;
    NSString *_errorMessage;
}

@property(readonly, copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(readonly, copy, nonatomic) NSString *customGenderPlaceholder; // @synthesize customGenderPlaceholder=_customGenderPlaceholder;
@property(readonly, copy, nonatomic) NSString *genderPlaceholder; // @synthesize genderPlaceholder=_genderPlaceholder;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 genderPlaceholder:(id)arg2 customGenderPlaceholder:(id)arg3 errorMessage:(id)arg4;

@end
