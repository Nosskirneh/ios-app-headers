//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPMButton.h"

@interface TouchTargetButton : GPMButton
{
}

+ (id)buttonWithImage:(id)arg1 title:(id)arg2 uppercaseTitle:(_Bool)arg3 target:(id)arg4 action:(SEL)arg5;
+ (id)buttonWithImageName:(id)arg1 titleKey:(id)arg2 uppercaseTitle:(_Bool)arg3 target:(id)arg4 action:(SEL)arg5;
+ (id)buttonWithTarget:(id)arg1 action:(SEL)arg2 accessibilityLabelKey:(id)arg3;
+ (id)roundButtonWithColorGroup:(id)arg1 imageName:(id)arg2 target:(id)arg3 action:(SEL)arg4 isFloating:(_Bool)arg5 accessibilityLabelKey:(id)arg6;
+ (id)buttonWithImageName:(id)arg1 target:(id)arg2 action:(SEL)arg3 accessibilityLabelKey:(id)arg4;
+ (id)buttonWithImageName:(id)arg1 selectedImageName:(id)arg2 target:(id)arg3 action:(SEL)arg4 accessibilityLabelKey:(id)arg5;
+ (id)buttonWithImage:(id)arg1 target:(id)arg2 action:(SEL)arg3 accessibilityLabelKey:(id)arg4;
+ (id)buttonWithImage:(id)arg1 selectedImage:(id)arg2 target:(id)arg3 action:(SEL)arg4 accessibilityLabelKey:(id)arg5;
- (id)initWithFrame:(struct CGRect)arg1 colorGroup:(id)arg2 shape:(long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

