---
layout: default
title: C语言课程
---


## Clang


<ul>
  {% for post in site.posts %}
    {% if post.tags contains 'pta' %}
        <h2> :point_right: <a href="/c{{ post.url }}"> {{ post.title }}{{ post.tags }}</a></h2>
    {% endif %}
  {% endfor %}
</ul>

## PTA

<ul>
  {% for post in site.posts %}
    {% if post.tags contains 'pta' %}
        <h2> :point_right: <a href="/c{{ post.url }}"> {{ post.title }}{{ post.layout }}</a></h2>
    {% endif %}
  {% endfor %}
</ul>

{% for tags in ['Clang', 'PTA'] %}
  <h2> {{ tags }}</h2>
  ## {{ tags }}
  <ul>
    {% for post in site.posts %}
      {% if post.tags contains tags' %}
          <h2> :point_right: <a href="/c{{ post.url }}"> {{ post.title }}{{ post.layout }}</a></h2>
      {% endif %}
    {% endfor %}
  </ul>
{% endfor %}