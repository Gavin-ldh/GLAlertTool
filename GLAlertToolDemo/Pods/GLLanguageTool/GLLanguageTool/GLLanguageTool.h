/*********************************************************************
 *
 * 文件名称： GLLanguageTool.h
 * 项目名称： GLAlertToolDemo
 * 作   者： Gavin Li
 * Blog  ： https://www.dhlee.cn
 * GitHub： https://github.com/Gavin-ldh
 * 当前版本： 1.0.0
 * 创建日期： 2018/4/19
 * 完成日期： // 输入完成日期，例：2018年08月08日
 * 内容摘要： // 简要描述本文件的内容，包括主要模块、函数及其功能的说明
 * 其它说明： // 其它内容的说明
 *
 * Copyright © 2018年 Gavin Lee. All rights reserved.
 *
 **********************************************************************/


#import <Foundation/Foundation.h>

typedef NS_OPTIONS(NSInteger, GLLanguageOptions) {
    /**  没有设置  */
    GLLanguageOptionNone        = 0x00,
    /**  英文  */
    GLLanguageOptionEN          = 0x01 << 0,
    /**  简体中文  */
    GLLanguageOptionZH_HANS     = 0x01 << 1,
    /**  繁体中文  */
    GLLanguageOptionZH_HANT     = 0x01 << 2,
    /**  俄语  */
    GLLanguageOptionRU          = 0x01 << 3,
    /**  法语  */
    GLLanguageOptionFR          = 0x01 << 4,
    /**  德语  */
    GLLanguageOptionDE          = 0x01 << 5,
    /**  意大利  */
    GLLanguageOptionIT          = 0x01 << 6,
    /**  西班牙  */
    GLLanguageOptionES          = 0x01 << 7,
    /**  日语  */
    GLLanguageOptionJA          = 0x01 << 8,
    /**  韩语  */
    GLLanguageOptionKO          = 0x01 << 9,
};

@interface GLLanguageTool : NSObject

/**  支持的语言 示例：GLLanguageZH_HANT | GLLanguageEN  默认值：GLLanguageEN  */
@property (nonatomic, assign) GLLanguageOptions languageOptions;


+ (instancetype)shareInstance;

/**  设置当前语言 language：默认跟随系统，当前系统语言不支持 默认英语 */
+ (void)setCurrentLanguage:(GLLanguageOptions)language;
/**  获取设置的语言  */
+ (GLLanguageOptions)getSettingLanguage;

/**  获取设置语言的CODE  */
+ (NSString *)getSettingLanguageCode;

@end
