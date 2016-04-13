//
//  UIView+YTXAnimation.h
//  p4
//
//  Created by 李龙龙 on 16/4/7.
//  Copyright © 2016年 com.baidao. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (YTXAnimation)

#pragma mark - Attention Seekers
/** bounce 弹性动画*/
- (void)ytx_bounceAnimtionWithDurationTime:(NSTimeInterval)durationTime;

/** 闪烁动画*/
- (void)ytx_flashAnimtionWithDurationTime:(NSTimeInterval)durationTime;

/** pluse动画*/
- (void)ytx_pluseAnimtionWithDurationTime:(NSTimeInterval)durationTime;

/** rubberBand动画*/
- (void)ytx_rubberBandAnimtionWithDurationTime:(NSTimeInterval)durationTime;

/** shake摇晃动画*/
- (void)ytx_shakeAnimtionWithDurationTime:(NSTimeInterval)durationTime;

/** swing动画*/
- (void)ytx_swingAnimtionWithDurationTime:(NSTimeInterval)durationTime;

/** tada动画  基于<JHChainableAnimations/JHChainableAnimations.h>*/
- (void)ytx_tadaAnimtionWithDurationTime:(NSTimeInterval)durationTime;

/** wobble动画*/
- (void)ytx_wobbleAnimtionWithDurationTime:(NSTimeInterval)durationTime;

/** jello动画*/
- (void)ytx_jelloAnimtionWithDurationTime:(NSTimeInterval)durationTime;


#pragma mark - Bouncing Entrances

/** bounceln动画*/
- (void)ytx_bounceInAnimtionWithDurationTime:(NSTimeInterval)durationTime;

/** bouncelnDown动画*/
- (void)ytx_bounceInDownAnimtionWithDurationTime:(NSTimeInterval)durationTime;

/** bouncelnLeft动画*/
- (void)ytx_bounceInLeftAnimtionWithDurationTime:(NSTimeInterval)durationTime;

/** bouncelnRight动画*/
- (void)ytx_bounceInRightAnimtionWithDurationTime:(NSTimeInterval)durationTime;

/** bouncelnUp动画*/
- (void)ytx_bounceInUpAnimtionWithDurationTime:(NSTimeInterval)durationTime;

#pragma mark - Fading Entrances

/** fadeIn动画*/
- (void)ytx_fadeInAnimtionWithDurationTime:(NSTimeInterval)durationTime;

/** fadeInDown动画*/
- (void)ytx_fadeInDownAnimtionWithDurationTime:(NSTimeInterval)durationTime;

/** fadeInDownBig动画*/
- (void)ytx_fadeInDownBigAnimtionWithDurationTime:(NSTimeInterval)durationTime;

/** fadeInLeft动画*/
- (void)ytx_fadeInLeftAnimtionWithDurationTime:(NSTimeInterval)durationTime;

/** fadeInLeftBig动画*/
- (void)ytx_fadeInLeftBigAnimtionWithDurationTime:(NSTimeInterval)durationTime;

/** fadeInRight动画*/
- (void)ytx_fadeInRightAnimtionWithDurationTime:(NSTimeInterval)durationTime;

/** fadeInRightBig动画*/
- (void)ytx_fadeInRightBigAnimtionWithDurationTime:(NSTimeInterval)durationTime;

/** fadeInUp动画*/
- (void)ytx_fadeInUpAnimtionWithDurationTime:(NSTimeInterval)durationTime;

/** fadeInUpBig动画*/
- (void)ytx_fadeInUpBigAnimtionWithDurationTime:(NSTimeInterval)durationTime;

#pragma mark - Fading Exits
- (void)ytx_fadeOutAnimtionWithDurationTime:(NSTimeInterval)durationTime;

- (void)ytx_fadeOutDownAnimtionWithDurationTime:(NSTimeInterval)durationTime;

- (void)ytx_fadeOutDownBigAnimtionWithDurationTime:(NSTimeInterval)durationTime;

- (void)ytx_fadeOutLeftAnimtionWithDurationTime:(NSTimeInterval)durationTime;

- (void)ytx_fadeOutLeftBigAnimtionWithDurationTime:(NSTimeInterval)durationTime;

- (void)ytx_fadeOutRightAnimtionWithDurationTime:(NSTimeInterval)durationTime;

- (void)ytx_fadeOutRightBigAnimtionWithDurationTime:(NSTimeInterval)durationTime;

- (void)ytx_fadeOutUpAnimtionWithDurationTime:(NSTimeInterval)durationTime;

- (void)ytx_fadeOutUpBigAnimtionWithDurationTime:(NSTimeInterval)durationTime;

#pragma mark - Flippers

#pragma mark - Special
- (void)ytx_hingeAnimtionWithDurationTime:(NSTimeInterval)durationTime;

- (void)ytx_rollInAnimationWithDurationTime:(NSTimeInterval)durationTime;

- (void)ytx_rollOutAnimationWithDurationTime:(NSTimeInterval)durationTime;

@end
